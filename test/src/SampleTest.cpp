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

#include "gtest/gtest.h"
#include "Sample.h"

namespace {
    class SampleTest : public ::testing::Test {
        protected:
            virtual void SetUp() {
                _sample = Sample(); // Creates a new Sample before each test.
            }

            Sample _sample;
    };

    TEST_F(SampleTest, SayHelloShouldPrintCorrectSentence)
    {
        ASSERT_EQ("Hello world, I do TDD with GoogleTest", _sample.SayHello());
    }

    TEST_F(SampleTest, TrueShouldReturnABooleanEqualsToTrue)
    {
        ASSERT_TRUE(_sample.True());
    }

    TEST_F(SampleTest, AddWhenDefaultConstructorUsed)
    {
        ASSERT_EQ(2, _sample.Add(2));
    }

    TEST_F(SampleTest, AddWhenSpecificConstructorUsed)
    {
        _sample = Sample(2);
        ASSERT_EQ(4, _sample.Add(2));
    }
}


