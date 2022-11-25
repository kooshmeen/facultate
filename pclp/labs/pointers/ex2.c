#include <stdio.h>

#define NMAX 50

int str_length (char *s) {
    int i = 0;
    while (*(s + i) != '\0') {
        i++;
    }
    return i;
}

char * strdel (char *s, int pos, int n) {
    int i = 0;
    for (i = 0; i < str_length(s); i++) {
        *(s + pos + i) = *(s + pos + i + n);
    }
    return s;
}

char * strins (char *s1, int pos, char *s2) {
    int lens2 = str_length(s2), lens1 = str_length(s1);
    int i = 0, j = 0;
    for (i = pos; i < pos + lens2; i++) {
        *(s1 + i + lens2) = *(s1 + i);
        *(s1 + i) = *(s2 + j++);
    }
    return s1;
}

void print_str (char *s) {
    int len = str_length(s);
    for (int i = 0; i < len; i++) {
        printf("%c", *(s + i));
    }
    printf("\n");
}

int eq_mask (char *sir, char *masca) {
    int i = 0, len_sir = str_length(sir), len_masca = str_length(masca);
    short fl = 1;
    if (len_sir != len_masca) {
        return 0;
    }
    else {
        while (i < len_sir && fl) {
            if (*(sir + i) != *(masca + i) && *(masca + i) != '?') {
                fl = 0;
            }
            i++;
        }
        if (fl) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main () {
    char s[NMAX] = "lol lol";
    char s2[NMAX] = " gigantic l";
    char mask[NMAX] = "l?? gi?an?ic ?o?";
    char mask2[NMAX] = "l ? gi?an?ic ?o?";
    printf ("%d\n", str_length(s));
    *s = *strdel(s, 3, 2);
    print_str (s);
    *s = *strins(s, 3, s2);
    print_str (s);
    if (eq_mask (s, mask)) {
        printf ("Sirul este egal cu masca\n");
    } else {
        printf("Sirul NU este egal cu masca\n");
    }
    if (eq_mask (s, mask2)) {
        printf ("Sirul este egal cu masca\n");
    } else {
        printf("Sirul NU este egal cu masca\n");
    }

    return 0;
}