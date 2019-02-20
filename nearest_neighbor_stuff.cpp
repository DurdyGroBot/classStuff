//
// Created by jacob corbin on 2019-02-19.
//

#include <iostream>
#include <utility>

std::pair<uint8_t *, double> findNearestNeighbor(uint8_t *target,
                                                 uint8_t **neighbors,
                                                 size_t neighborCount,
                                                 size_t neighborSize)  {
    double nearest = 10000000;
    for (int i = 0; i < neighborCount; i++) {
        double distance = 0;
        for (int j = 0; j < neighborSize; j++) {
            float m = target[i] - neighbors[i][j];
            distance += m * m;
        }
        nearest = std::min(nearest, distance);
    }
}

int main(int argc, char *argv[]) {
}