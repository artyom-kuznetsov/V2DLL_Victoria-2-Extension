// FUN_0060be60 @ 0060be60 body=[[0060be60, 0060bf69]]


void FUN_0060be60(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  longlong lVar4;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  lVar4 = __allmul();
  FUN_00401000(0x47c35040,extraout_ECX);
  iVar2 = FUN_00b31c00();
  uVar3 = __alldiv((longlong)iVar2 *
                   (longlong)
                   (int)((uint)(lVar4 >> 0xf) >> 0xf |
                        (int)((ulonglong)(lVar4 >> 0xf) >> 0x20) << 0x11),1000,0);
  (**(code **)(*(int *)(param_1 + 0x54) + 0x30))(uVar3);
  uVar3 = *(undefined4 *)(iVar1 + 0x1448 + param_2 * 8);
  FUN_00401000(((float)((float10)CONCAT44(*(undefined4 *)(iVar1 + 0x144c + param_2 * 8),uVar3) *
                        (float10)3.0517578125e-05 * (float10)param_3) + 0.0005) * 1000.0,uVar3,1,1);
  FUN_00b31c00();
  (**(code **)(*(int *)(param_1 + 0x54) + 0x1c))();
  return;
}

