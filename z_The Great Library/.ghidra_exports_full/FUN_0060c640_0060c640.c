// FUN_0060c640 @ 0060c640 body=[[0060c640, 0060c6af]]


void FUN_0060c640(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 auStack_10 [3];
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x20))();
  FUN_0060bb60();
  FUN_0060c6f0();
  auStack_10[0] = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  puVar1 = (undefined4 *)
           FUN_00522cf0(*(undefined4 *)
                         (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                        auStack_10);
  *(undefined4 *)(in_ECX + 0x200) = *puVar1;
  *(undefined4 *)(in_ECX + 0x204) = puVar1[1];
  return;
}

