#include "DistanceSegment.h"

using pyvrp::DistanceSegment;

// Distance Segment id
DistanceSegment::DistanceSegment(size_t idx)
    : idxFirst_(idx), idxLast_(idx), distance_(0)
{
}
