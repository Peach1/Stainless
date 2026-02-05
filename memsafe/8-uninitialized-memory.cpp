// In Stainless, this defaults to an error when -Wmemsafe is on

int main()
{
    int x; // ❌ uninitialized
    x = x + 5; // error: Variable 'x' is uninitialized when used here
}
 
