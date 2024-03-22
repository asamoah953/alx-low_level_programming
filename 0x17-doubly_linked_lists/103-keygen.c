#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

import sys

def generate_key(username):
    
    key = username[::-1] + "S3cr3t"
    return key

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./keygen5 username")
        sys.exit(1)

    username = sys.argv[1]
    key = generate_key(username)
    print(key)

