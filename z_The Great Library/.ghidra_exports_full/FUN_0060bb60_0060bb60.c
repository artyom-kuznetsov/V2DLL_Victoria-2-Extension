// FUN_0060bb60 @ 0060bb60 body=[[0060bb60, 0060bc27] [0060bc30, 0060be51]]


void FUN_0060bb60(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int iVar4;
  undefined8 local_1c;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0x1234);
    if (*(int *)(iVar1 + iVar4) == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *(longlong *)(*(int *)(iVar1 + iVar4) + 0x10);
    }
    iVar1 = *(int *)(unaff_ESI + 0x110 + iVar4);
    FUN_00401000(((float)((float10)local_1c * (float10)3.0517578125e-05 * (float10)100.0) + 0.0005)
                 * 1000.0);
    FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))();
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x10);
  iVar4 = 0;
  do {
    iVar1 = *(int *)(unaff_ESI + 0x120 + iVar4);
    FUN_00401000(((float)((float10)*(longlong *)
                                    (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                               *(int *)(DAT_012588e8 + 0xb60) * 4) +
                                                      0xa0) + iVar4) + 0x10) *
                          (float10)3.0517578125e-05 * (float10)100.0) + 0.0005) * 1000.0);
    FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))();
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0xc);
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar1 = *(int *)(*(int *)(iVar4 + 0xa60) + 0xf0);
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  __alldiv((longlong)iVar2 * (longlong)iVar1);
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 300) + 0x54) + 0x34))();
  __alldiv((longlong)iVar2 * (longlong)*(int *)(*(int *)(iVar4 + 0xa60) + 0xe8),1000);
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 300) + 0x54) + 0x30))();
  iVar1 = *(int *)(unaff_ESI + 300);
  FUN_00401000(((float)((float10)*(longlong *)(iVar4 + 0x1440) * (float10)3.0517578125e-05 *
                       (float10)100.0) + 0.0005) * 1000.0,*(undefined4 *)(iVar4 + 0x1444),1);
  uVar3 = FUN_00b31c00();
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar3);
  FUN_0060be60(*(undefined4 *)(unaff_ESI + 0x130),0,DAT_00f14418);
  FUN_0060be60(*(undefined4 *)(unaff_ESI + 0x134),1,DAT_00f14418);
  FUN_0060be60(*(undefined4 *)(unaff_ESI + 0x138),2,DAT_00f14418);
  return;
}

