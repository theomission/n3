/*The MIT License (MIT)
 *
 *Copyright (c) 2014 Michael O'Farrell, Bram Wasti
 *
 *Permission is hereby granted, free of charge, to any person obtaining a copy
 *of this software and associated documentation files (the "Software"), to deal
 *in the Software without restriction, including without limitation the rights
 *to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *copies of the Software, and to permit persons to whom the Software is
 *furnished to do so, subject to the following conditions:
 *
 *The above copyright notice and this permission notice shall be included in
 *all copies or substantial portions of the Software.
 *
 *THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *THE SOFTWARE.
 *
 */

#include "gamecube.hpp"

GameCube::GameCube(glm::vec3 position, LightedColorShader *shader)
      : cube(shader),
        position(position) {
}

void GameCube::draw(glm::mat4 view, glm::mat4 proj) {
    cube.model = glm::translate(glm::mat4(1.0f), position);
    cube.draw(view, proj);
}

void GameCube::draw_rotate(glm::mat4 view, glm::mat4 proj, float rotate) {
    cube.model = glm::rotate(cube.model, rotate, glm::vec3(0.7f, 0.5f, 0.2f));
    cube.draw(view, proj);
}

void GameCube::draw_big(glm::mat4 view, glm::mat4 proj){ 
    cube.model = glm::translate(glm::mat4(1.0f), glm::vec3(0.f, 0.f, -2.f));
    //cube.draw(view, proj);
}

GameCube::~GameCube() {

}

