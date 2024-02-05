/* PRINT_TEST_HERE
void    data_printer(t_data data)
{
    int i;

    i = 0;
    printf("North: %s\n", data.north);
    printf("South: %s\n", data.south);
    printf("East: %s\n", data.east);
    printf("West: %s\n", data.west);
    printf("Ceiling: %d, %d, %d\n", data.ceiling.r, data.ceiling.g, data.ceiling.b);
    printf("Floor: %d, %d, %d\n", data.floor.r, data.floor.g, data.floor.b);
    printf("Start: %d, %d\n", data.map.start.x, data.map.start.y);
    while (i < data.map.road_count)
    {
        printf("Road: %d, %d\n", data.map.roads[i].x, data.map.roads[i].y);
        i++;
    }
    i = 0;
    while (i < data.map.wall_count)
    {
        printf("Wall: %d, %d\n", data.map.walls[i].x, data.map.walls[i].y);
        i++;
    }
    i = 0;
    while (i < data.map.space_count)
    {
        printf("Space: %d, %d\n", data.map.spaces[i].x, data.map.spaces[i].y);
        i++;
    }
    i = 0;
     while (data.map.value[i])
    {
        printf("%s\n", data.map.value[i]);
        i++;
    }
}
*/