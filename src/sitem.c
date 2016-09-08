#include "main.h"

#define X 0x01,
#define _ 0x00,

const spic intro[] =
{
    { .img = {
        { _ _ _ _ _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ X X _ _ _ _ _ X X X _ _ _ _ _ _ _ _ X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ X X X X X _ },
        { _ _ _ _ _ X X X X X _ _ _ _ _ _ X X _ _ _ _ X X X X _ _ _ _ X X X X _ _ _ X X X X _ _ _ _ _ X X _ _ X X X X X X _ _ _ _ _ _ X X X X X _ _ _ _ X X },
        { _ _ _ _ X X X X X X X _ _ X X X X X _ _ _ _ X X X X _ _ _ X X X X X _ _ X X X X X _ _ _ _ X X X X _ X X X X X X _ _ X X X X X _ _ _ _ _ _ _ _ X X },
        { _ _ _ X X X X X X X X _ _ X X X X X _ _ _ X X X X X _ _ X X X X X X _ _ _ X X X X _ _ _ X X X X X _ X X X _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ X X },
        { _ _ X X X X X X X X _ _ _ X X X X X _ _ _ X X X X _ _ _ X X X X X X _ _ _ X X X X _ _ _ X X X X _ X X X _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _ _ _ X X X },
        { _ _ X X X X X X _ _ _ _ _ X X X X X X _ _ X X X X _ _ X X X X X X X X _ _ _ _ X X _ _ X X X X _ X X _ _ _ _ _ _ X _ _ _ _ _ _ _ X X _ _ X X X X _ },
        { _ X X X X X _ _ _ _ _ _ _ X X X X X X _ _ X X X X _ _ X X X _ _ X X X _ X X _ X X X X X X X X _ X X _ _ X X _ _ X _ _ X X _ _ X X X _ _ X X _ _ _ },
        { _ X X X X _ _ _ _ _ _ _ _ X X X X X X X _ X X X X _ _ X X X _ _ X X X X X X X _ X X X X X X _ X X X _ X X X _ _ X X X X X _ _ X _ X _ _ X X _ _ _ },
        { _ X X X _ _ _ _ _ _ _ _ _ _ X X X X X X _ X X X X _ _ X X X _ _ _ X X X X X X _ X X X X X _ _ X X X X X X X _ _ _ X X X X _ _ X _ X _ _ X X _ _ _ },
        { X X X X _ _ _ X X X X X _ _ X X X _ X X _ X X X X _ X X X X _ _ X X X X X X _ _ X X X X _ _ _ _ X X X X X _ _ _ _ _ _ _ X _ _ X _ X _ _ X X _ _ _ },
        { X X X X X X X X X X X X X _ X X X _ X X X X X X X _ X X X X X X X X X X _ _ _ X X X X X X _ _ _ X X X X _ _ X X _ _ _ _ X _ _ X _ X _ _ X X _ _ _ },
        { X X X X X X X X X X X X X _ X X X _ _ X X X X X _ _ X X X X X X X X X X _ _ X X X X X X X X _ _ _ X X X _ X X X _ _ _ _ X _ _ X _ X _ _ X X X X _ },
        { X X X X X _ _ _ X X X X X _ X X X _ _ X X X X X _ X X X X X X _ _ X X X X _ X X X X _ X X X X _ _ X X X X X X X _ _ _ _ X _ _ X _ X _ _ X X X X X },
        { _ _ _ _ _ _ _ X X X X X X _ X X X _ _ _ X X X _ _ X X X X _ _ _ _ X X X X _ X X X X _ _ X X X _ _ _ X X X X X _ _ _ _ _ X _ _ X _ X _ _ X _ _ _ X },
        { _ _ _ _ _ X X X X X X X _ X X X X _ _ _ _ _ _ _ X X X X X _ _ _ _ _ _ _ _ _ _ X X X _ _ _ X X _ _ _ X X X _ _ _ _ _ _ _ X _ _ X X _ _ _ _ _ _ _ X },
        { _ _ _ _ X X X X X X X _ _ X X _ _ _ _ _ _ _ _ _ X X X X _ _ _ _ _ _ _ X X X _ _ X X _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ X X },
        { _ X X X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X _ _ X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ X X X X X },
        { _ X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X _ _ X X _ _ X X _ X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ X X X X X _ _ },
        { _ _ X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ X X _ _ _ X _ X X _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ X X X X X _ _ _ _ _ },
        { _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ X _ _ X X _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _ _ X _ _ X X X X X _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X X X X X X _ X X _ X _ _ _ X X X X X _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _ X X X X X X _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ X _ X _ X _ X X X X X _ _ _ X _ _ _ _ _ _ X X X X _ _ X X _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ X X X _ X _ X _ X _ X _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ X X _ X _ X _ X _ X _ X _ X X X X X X X X X X _ _ _ _ _ _ _ _ X X X X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ X X _ X _ X _ X _ X X X X X _ X _ _ _ _ _ _ _ _ X _ _ X X X X X X X X _ X _ X _ X _ X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ X X _ X _ X _ X X X X X _ _ _ _ X X X _ _ _ _ _ _ _ X X X X _ _ _ X _ X X _ X _ X _ X _ X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ X X _ X _ X _ X X _ _ _ _ _ _ _ _ _ X _ X X X X X X X _ X X _ _ _ _ X _ _ _ X _ X X X X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ X _ X _ X _ X X _ _ _ _ _ _ _ _ _ _ X _ X _ _ X X _ X _ X _ _ _ _ X X _ _ _ X X _ _ _ _ _ _ _ _ _ _ X X _ _ _ _ X X _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ X _ X _ X X X X _ _ _ _ _ _ _ _ _ _ _ _ X X _ _ X X _ _ X X _ _ _ X X _ _ _ X _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ X _ _ X X _ _ _ _ _ _ _ },
        { _ _ _ _ _ X X X X _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X _ _ X _ _ _ _ X X _ _ _ X _ _ _ _ X X X X X X X X _ _ _ _ X X X X _ _ _ X _ _ _ _ _ _ },
        { _ _ X X X X X X _ X _ X _ X X X X _ _ _ _ _ _ _ _ _ _ X _ X _ X _ _ _ _ X X _ _ _ X _ _ _ _ X _ _ _ _ _ _ _ _ X _ _ _ _ X _ X X _ _ _ X _ _ _ _ _ },
        { _ X X _ X _ X _ X X X X X _ X X X X _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ X X _ _ _ X _ _ _ _ X _ _ _ _ _ _ _ _ _ _ X _ _ _ X _ X X X _ _ X _ _ _ _ _ },
        { _ X _ X _ X _ X X _ _ _ X X _ X _ X X _ _ _ _ _ _ _ _ _ _ X _ _ _ _ X X _ _ _ X _ _ _ _ X _ _ _ _ X X X X X _ X X _ _ _ X X X X X _ _ _ X X _ _ _ },
        { _ X X X X X X _ X X _ X X X X X X X X _ _ _ _ _ _ _ _ _ X _ _ _ _ X X _ _ _ _ X _ _ _ X _ _ _ X X X X _ _ X X X _ _ _ _ X X X X X X _ _ X _ X _ _ },
        { X X _ X _ X X X _ X X X X X _ X _ X _ X _ _ _ _ _ _ _ X _ _ _ _ X X _ _ _ _ X _ _ _ X _ _ _ X X _ _ _ X X X X X X X X X _ X _ X X X _ _ _ X X _ _ },
        { X _ X _ X _ X X X _ X _ X _ X _ X _ X _ X X _ _ _ _ X _ _ _ _ X X _ _ X X _ X _ _ _ X _ _ _ X _ X _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ X X _ _ X _ _ _ },
        { _ X X X X X X X _ X _ X _ X _ X X X X X X X X _ _ X _ _ _ _ X X _ _ X X X _ X _ _ _ _ X _ _ X X _ X _ _ _ _ _ _ _ _ _ _ _ X _ X X X X _ _ X _ _ _ },
        { _ _ _ _ _ _ _ X X X X X X _ X _ X _ X _ X _ X _ X _ _ _ _ X X _ _ X X X X X _ X _ _ _ _ X _ _ X _ X X X _ _ _ _ _ _ X X X _ X X X X X _ _ X _ _ },
        { _ _ _ _ _ _ _ _ _ X X X X X X X _ X _ X _ X X _ X _ _ _ _ X _ _ X X X X X X _ _ X _ _ _ _ X _ _ X _ _ _ X X X X X X _ _ _ X _ X X X X _ _ X _ _ },
        { _ _ _ X X X X X _ _ _ _ X _ X X X X X X X X _ _ X _ _ _ _ X _ X X X X X X X X _ _ X _ _ _ _ X _ _ X _ _ _ _ _ _ _ _ _ _ _ _ X X X X X _ _ X _ _ },
        { _ X X X X X X X X X _ _ X _ X X X X X X _ X _ X _ _ _ _ X X _ _ _ X X X X X X X _ _ X _ X _ _ X _ _ X X _ _ _ _ _ _ X X X X _ X _ X X _ _ X _ _ },
        { X X X X X X X X X X X _ X X _ _ _ X _ X X _ _ X _ _ _ _ X _ X X _ _ _ _ _ _ _ _ _ _ _ X _ _ _ X X _ X _ X X X X X X _ _ X _ X X _ _ X _ _ X _ _ },
        { X X X X X X X X X X X _ _ _ _ _ X _ X _ _ _ _ X _ _ _ _ _ _ _ _ X X X X X X X X X X X _ _ _ _ _ X _ X _ _ _ _ _ _ _ _ _ _ X X _ X X X X X _ _ _ },
        { _ X X X X X X X X X X X X X _ _ _ _ _ _ _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X _ X X X _ _ _ _ _ X X X _ _ _ _ _ _ _ _ _ X _ },
        { _ _ X X X X X X X X X X X X X X X X X X X X X _ _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ X X X X X X _ _ _ _ X X X X X X X X _ _ },
        { _ _ _ X X X X X X X X X X X X X X X X X X X X X _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ X X X X _ _ X X _ _ _ _ _ _ _ _ X X X X X X X X X _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ X X X X X X X X X X X X X X X _ _ _ _ X X X X X X X X X X X X X _ _ _ _ _ X X X X X X X X X X X X X _ _ _ _ _ _ _ _ _ _ _ },
    }},
    { .img = {
        { _ _ _ _ _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ X X _ _ _ _ _ X X X _ _ _ _ _ _ _ _ X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ X X X X X _ },
        { _ _ _ _ _ X X X X X _ _ _ _ _ _ X X _ _ _ _ X X X X _ _ _ _ X X X X _ _ _ X X X X _ _ _ _ _ X X _ _ X X X X X X _ _ _ _ _ _ X X X X X _ _ _ _ X X },
        { _ _ _ _ X X X X X X X _ _ X X X X X _ _ _ _ X X X X _ _ _ X X X X X _ _ X X X X X _ _ _ _ X X X X _ X X X X X X _ _ X X X X X _ _ _ _ _ _ _ _ X X },
        { _ _ _ X X X X X X X X _ _ X X X X X _ _ _ X X X X X _ _ X X X X X X _ _ _ X X X X _ _ _ X X X X X _ X X X _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ X X },
        { _ _ X X X X X X X X _ _ _ X X X X X _ _ _ X X X X _ _ _ X X X X X X _ _ _ X X X X _ _ _ X X X X _ X X X _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _ _ _ X X X },
        { _ _ X X X X X X _ _ _ _ _ X X X X X X _ _ X X X X _ _ X X X X X X X X _ _ _ _ X X _ _ X X X X _ X X _ _ _ _ _ _ X _ _ _ _ _ _ _ X X _ _ X X X X _ },
        { _ X X X X X _ _ _ _ _ _ _ X X X X X X _ _ X X X X _ _ X X X _ _ X X X _ X X _ X X X X X X X X _ X X _ _ X X _ _ X _ _ X X _ _ X X X _ _ X X _ _ _ },
        { _ X X X X _ _ _ _ _ _ _ _ X X X X X X X _ X X X X _ _ X X X _ _ X X X X X X X _ X X X X X X _ X X X _ X X X _ _ X X X X X _ _ X _ X _ _ X X _ _ _ },
        { _ X X X _ _ _ _ _ _ _ _ _ _ X X X X X X _ X X X X _ _ X X X _ _ _ X X X X X X _ X X X X X _ _ X X X X X X X _ _ _ X X X X _ _ X _ X _ _ X X _ _ _ },
        { X X X X _ _ _ X X X X X _ _ X X X _ X X _ X X X X _ X X X X _ _ X X X X X X _ _ X X X X _ _ _ _ X X X X X _ _ _ _ _ _ _ X _ _ X _ X _ _ X X _ _ _ },
        { X X X X X X X X X X X X X _ X X X _ X X X X X X X _ X X X X X X X X X X _ _ _ X X X X X X _ _ _ X X X X _ _ X X _ _ _ _ X _ _ X _ X _ _ X X _ _ _ },
        { X X X X X X X X X X X X X _ X X X _ _ X X X X X _ _ X X X X X X X X X X _ _ X X X X X X X X _ _ _ X X X _ X X X _ _ _ _ X _ _ X _ X _ _ X X X X _ },
        { X X X X X _ _ _ X X X X X _ X X X _ _ X X X X X _ X X X X X X _ _ X X X X _ X X X X _ X X X X _ _ X X X X X X X _ _ _ _ X _ _ X _ X _ _ X X X X X },
        { _ _ _ _ _ _ _ X X X X X X _ X X X _ _ _ X X X _ _ X X X X _ _ _ _ X X X X _ X X X X _ _ X X X _ _ _ X X X X X _ _ _ _ _ X _ _ X _ X _ _ X _ _ _ X },
        { _ _ _ _ _ X X X X X X X _ X X X X _ _ _ _ _ _ _ X X X X X _ _ _ _ _ X X X _ X X X X _ _ _ X X _ _ _ X X X _ _ _ _ _ _ _ X _ _ X X _ _ _ _ _ _ _ X },
        { _ _ _ _ X X X X X X X _ _ X X _ _ _ _ _ _ _ _ _ X X X X _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ X X _ _ _ _ _ _ _ _ _ _ X X },
        { _ X X X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ X X X X X },
        { _ X X X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ X X X X X _ _ },
        { _ _ X X X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ X X X X X _ _ _ _ _ },
        { _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X _ _ X X X X X _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X X X X _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X X _ _ _ _ _ _ _ _ _ _ _ _ },
        { _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ },
    }},
};

#undef X
#undef _

#define S ((((((((
#define _ +0)*2
#define X +1)*2
#define E /2

const sitem bugs[] =
{
    { .rows = {
    S       _ X _ X _ X _ _     E,
    S       X _ X X X X X _     E,
    S       X X X X X X X X     E,
    S       _ _ X _ _ X _ _     E,
    } }, {.rows = {
    S       _ _ X X X X _ _     E,
    S       X X X X X X X X     E,
    S       X _ X X X X _ X     E,
    S       X _ X _ _ X _ X     E,
    } }, {.rows = {
    S       _ _ X X _ _ _ _     E,
    S       _ X _ X X _ X _     E,
    S       X X X X X X X _     E,
    S       _ _ X X X X _ _     E,
    } }, {.rows = {
    S       X X _ _ _ X _ _     E,
    S       X X _ _ X X X _     E,
    S       _ _ X X X X X X     E,
    S       _ _ _ _ X _ X _     E,
    } }, {.rows = {
    S       _ _ _ _ _ _ _ _     E,
    S       X _ _ _ _ _ _ _     E,
    S       X X X X X X X X     E,
    S       _ X _ X _ X _ X     E,
    } }, {.rows = {
    S       _ X X _ X X X X     E,
    S       X _ _ _ _ _ X _     E,
    S       X _ _ _ _ X _ _     E,
    S       _ X X _ X X X X     E,
    } }
};

const sitem parts[] =
{
    { .rows = {
    S       X _ _ _ _ _ _ _     E,
    S       _ X X _ _ _ _ _     E,
    S       X X X _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _     E,
    } }, {.rows = {
    S       X _ X _ _ _ _ _     E,
    S       _ X _ _ _ _ _ _     E,
    S       X X _ _ _ _ _ _     E,
    S       _ _ X _ _ _ _ _     E,
    } }, {.rows = {
    S       _ _ _ _ _ _ _ _     E,
    S       X X _ X _ _ _ _     E,
    S       X _ X X _ _ _ _     E,
    S       _ _ _ _ _ _ _ _     E,
    } }, {.rows = {
    S       _ X X _ _ _ _ _     E,
    S       X X _ X _ _ _ _     E,
    S       X _ X X _ _ _ _     E,
    S       _ X X _ _ _ _ _     E,
    } }, {.rows = {
    S       _ _ _ _ _ _ _ _     E,
    S       _ _ X X _ _ _ _     E,
    S       _ X _ X _ _ _ _     E,
    S       _ X X _ _ _ _ _     E,
    } }, {.rows = {
    S       _ _ _ _ _ _ _ _     E,
    S       _ _ X X _ _ _ _     E,
    S       _ X _ X _ _ _ _     E,
    S       _ X X X _ _ _ _     E,
    } }, {.rows = {
    S       _ _ _ _ _ _ _ _     E,
    S       _ _ X X _ _ _ _     E,
    S       X X X X _ _ _ _     E,
    S       _ _ _ _ _ _ _ _     E,
    } }
};

const sitem berry =
{
    .rows = {
    S       _ X _ _ _ _ _ _     E,
    S       X _ X _ _ _ _ _     E,
    S       _ X _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _     E,
} };

#undef E
#undef X
#undef _
#undef S

#define S ((((((((((((((((((((
#define _ +0)*2
#define X +1)*2
#define E *1024

const smaze mazes[] =
{
    { .sp = {11, 4}, .name = "No maze", .rows = {
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    } }, { .sp = {11, 4}, .name = "Maze 1", .rows = {
    S       X X X X X X X X X X X X X X X X X X X X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X X X X X X X X X X X X X X X X X X X X     E,
    } }, { .sp = {7, 4}, .name = "Maze 2", .rows = {
    S       X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X X X X X _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X X X X X _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X X     E,
    } }, { .sp = {7, 5}, .name = "Maze 3", .rows = {
    S       _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X _ _ X X X X X X X X X     E,
    S       _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X _ _ _ X _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _     E,
    S       X X X X X X X X X X _ _ X _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _     E,
    } }, { .sp = {11, 7}, .name = "Maze 4", .rows = {
    S       X X X X X X X X X X X X X X X X X X X X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ X _ _ _ _ _ X _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ X _ _ _ _ _ X _ _ _ _ _ X     E,
    S       _ _ _ _ _ _ _ X _ _ _ _ _ X _ _ _ _ _ _     E,
    S       X _ _ _ _ _ _ X _ _ _ _ _ X _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ X _ _ _ _ _ X _ _ _ _ _ X     E,
    S       X _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ X     E,
    S       X X X X X X X X X X X X X X X X X X X X     E,
    } }, { .sp = {11, 4}, .name = "Maze 5", .rows = {
    S       X X X _ X X X X X X X X X X X X X X _ _     E,
    S       X _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _ _ _ _     E,
    S       X X X X X X X X X _ _ X X X X X X X X X     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _     E,
    S       X X X X X X X X X X X X X X X X X X X X     E,
    S       _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _     E,
    S       _ _ _ _ _ _ _ _ _ _ _ X _ _ _ _ _ _ _ _     E,
    } },
};

#undef E
#undef X
#undef _
#undef S

#define S (((((
#define _ +0)*2
#define X +1)*2
#define E /2

const snum numbers[] =
{
    {{
        S       X X X X X       E,
        S       X _ _ _ X       E,
        S       X X X X X       E,
    }}, {{
        S       _ X _ _ _       E,
        S       X X X X X       E,
        S       _ _ _ _ _       E,
    }}, {{
        S       X _ X X X       E,
        S       X _ X _ X       E,
        S       X X X _ X       E,
    }}, {{
        S       X _ X _ X       E,
        S       X _ X _ X       E,
        S       X X X X X       E,
    }}, {{
        S       X X X _ _       E,
        S       _ _ X _ _       E,
        S       X X X X X       E,
    }}, {{
        S       X X X _ X       E,
        S       X _ X _ X       E,
        S       X _ X X X       E,
    }}, {{
        S       X X X X X       E,
        S       X _ X _ X       E,
        S       X _ X X X       E,
    }}, {{
        S       X _ _ _ _       E,
        S       X _ X X X       E,
        S       X X _ _ _       E,
    }}, {{
        S       X X X X X       E,
        S       X _ X _ X       E,
        S       X X X X X       E,
    }}, {{
        S       X X X _ X       E,
        S       X _ X _ X       E,
        S       X X X X X       E,
    }},
};

#undef E
#undef X
#undef _
#undef S