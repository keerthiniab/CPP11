1. Capture clause
///////////////////////////////////////////////////////
// Capture Clause - Capturing outside variables
total - by references
factor - by value
-------------------------------------------------------
[&total, factor]
[factor, &total]
[&, factor]
[factor, &]
[=, &total]
[&total, =]
-------------------------------------------------------

////////////////////////////////////////////////////////
struct S { void f(int i); };

void S::f(int i) {
    [&, i]{};      // OK
    [&, &i]{};     // ERROR: i preceded by & when & is the default
    [=, this]{};   // ERROR: this when = is the default
    [=, *this]{ }; // OK: captures this by value. See below.
    [i, i]{};      // ERROR: i repeated
}
////////////////////////////////////////////////////////

//Variadic Template
template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}

