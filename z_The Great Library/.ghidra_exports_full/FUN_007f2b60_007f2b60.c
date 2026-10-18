// FUN_007f2b60 @ 007f2b60 body=[[007f2b60, 007f2d0b]]


void FUN_007f2b60(int param_1)

{
  byte bVar1;
  int iStack0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  FUN_004e9b90();
  FUN_00423920();
  FUN_0044ed90();
  FUN_0068f390();
  FUN_0044ed90();
  bVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 0x15a8) + 0x20) *
                    (in_stack_00000020 + in_stack_00000028) +
                    *(int *)(*(int *)(param_1 + 0x15a8) + 0xc) +
                   in_stack_0000001c + in_stack_00000024);
  iStack0000000c = 0;
  if (bVar1 != 0) {
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 1) != 0) {
            iStack0000000c = 1;
          }
        }
        else {
          iStack0000000c = 2;
        }
      }
      else {
        iStack0000000c = 3;
      }
    }
    else {
      iStack0000000c = 4;
    }
  }
  FUN_0068f390();
  if (iStack0000000c != 0) {
    FUN_00423920();
    FUN_0044ed90();
    FUN_0068f390();
    FUN_0044ed90();
  }
  return;
}

