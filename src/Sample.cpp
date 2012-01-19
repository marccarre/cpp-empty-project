/*
 * Copyright (C) 2012, Marc CARRE.
 * All rights reserved.
 * Contact: carre.marc@gmail.com
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "Sample.h"
using namespace std;

Sample::Sample() {
    _initialValue = 0;
}

Sample::Sample(int initialValue) {
    _initialValue = initialValue;
}

Sample::~Sample() {
}

string Sample::SayHello() const {
    return "Hello world, I do TDD with GoogleTest";
}

bool Sample::True() const {
    return true;
}

int Sample::Add(int operand) const {
    return _initialValue + operand;
}
