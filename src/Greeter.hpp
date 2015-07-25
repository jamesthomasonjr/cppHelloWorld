// Greeter.hpp

// Include Guard
#ifndef JT_HELLOWORLD_GREETER_H_INCLUDED
#define JT_HELLOWORLD_GREETER_H_INCLUDED

#include <string>

namespace JT
{
namespace HelloWorld
{
    using std::string;

    /// <summary>
    /// A class that greets someone.
    /// </summary>
    class Greeter
    {
        private:
            /// <summmary>
            /// Who will be greeted
            /// </summary>
            string greeted;

        public:
            /// <summary>
            /// Creates a Greeter.
            /// </summary>
            /// <param name="target">The initial target of the greeting.</param>
            /// <returns>
            /// A new Greeter instance
            /// </returns>
            /// <remarks>
            /// Marked explicit to prevent inadvertent use as a type conversion constructor.
            /// </remarks>
            explicit Greeter(string target);

            /// <summary>
            /// Changes the greeter's target.
            /// </summary>
            /// <param name="target">The new target of the greeting.</param>
            /// <returns>
            /// The current Greeter instance.
            /// </returns>
            /// <remarks>
            /// Used to change the target of the greeting post-instantiation.
            /// </remarks>
            Greeter changeGreeted(string target);

            /// <summary>
            /// Gives a greeting.
            /// </summary>
            /// <returns>
            /// The current Greeter instance.
            /// </returns>
            /// <remarks>
            /// Says "Hello" to the Greeter instance's target.
            /// </remarks>
            Greeter greet();
    };
} // namespace HelloWorld
} // namespace JT

# endif // JT_HELLOWORLD_GREETER_H_INCLUDED
