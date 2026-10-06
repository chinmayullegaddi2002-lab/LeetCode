bool isValid(char * s) {
    int len = strlen(s);
    
    // An odd-length string cannot possibly have perfectly matching pairs
    if (len % 2 != 0) {
        return false;
    }
    
    // Allocate a stack up to the maximum possible size (the string length)
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1; // -1 indicates an empty stack
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        // Push open brackets onto the stack
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        // Handle closing brackets
        else {
            // If the stack is empty but we have a closing bracket, it's invalid
            if (top == -1) {
                free(stack);
                return false;
            }
            
            // Pop the top character and check for a mismatch
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }
    
    // If the stack is completely empty at the end, all brackets were matched
    bool isValid = (top == -1);
    free(stack);
    
    return isValid;
}