// FUN_0073d9e0 @ 0073d9e0 body=[[0073d9e0, 0073da50] [0073da5e, 0073da6d]]


bool FUN_0073d9e0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  if (*(int *)(in_ECX + 0x240) != 0) {
    FUN_0073d4a0();
    *(undefined4 *)(in_ECX + 0x240) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x244);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x2b] = CButtonObserver::vftable;
    puVar1[0x20] = CButtonObserver::vftable;
    puVar1[0x18] = CCheckBoxObserver::vftable;
    puVar1[0x10] = CCheckBoxObserver::vftable;
    puVar1[8] = CCheckBoxObserver::vftable;
    *puVar1 = CCheckBoxObserver::vftable;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar1);
  }
  FUN_0073da70(in_ECX);
  return *(int *)(in_ECX + 0x20) != 0;
}

