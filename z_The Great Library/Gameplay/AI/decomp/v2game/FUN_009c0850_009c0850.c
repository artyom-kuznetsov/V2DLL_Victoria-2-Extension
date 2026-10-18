// FUN_009c0850 @ 009c0850 body=[[009c0850, 009c089b]]


void FUN_009c0850(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_EDX;
  
  puVar1 = (undefined4 *)FUN_009bf050(in_EDX);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00ad0650(*puVar1,*(undefined4 *)(param_1 + 0x144));
    *(undefined1 *)(param_1 + 0x19c) = 1;
    FUN_004e9b90();
  }
  return;
}

