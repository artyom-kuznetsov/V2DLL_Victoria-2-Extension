// FUN_009fa610 @ 009fa610 body=[[009fa610, 009fa638] [009fa645, 009fa65f]]


void FUN_009fa610(void)

{
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x58) + 0x1c))(*(undefined4 *)(in_ECX + 0x5c));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  return;
}

