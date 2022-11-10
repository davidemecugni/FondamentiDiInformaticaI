#if !defined CARCASSONNE_H
#define CARCASSONNE_H
#include <stdbool.h>
#include <stddef.h>
struct casella {
int x, y;
char lati[4]; // 0: nord, 1: est, 2: sud, 3: ovest
};
extern bool controlla_casella(const struct casella *c, const struct casella *tabellone, size_t dim);
#endif /* CARCASSONNE_H */

