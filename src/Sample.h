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

#ifndef SAMPLE_H_
#define SAMPLE_H_

#include <string>
using namespace std;

class Sample {
    public:
        Sample();
        Sample(int initialValue);
        virtual ~Sample();

        string SayHello() const;
        bool True() const;
        int Add(int operand) const;

    private:
        int _initialValue;
};

#endif /* SAMPLE_H_ */
