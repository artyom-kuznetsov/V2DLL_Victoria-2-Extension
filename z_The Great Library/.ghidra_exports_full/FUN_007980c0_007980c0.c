// FUN_007980c0 @ 007980c0 body=[[007980c0, 00798275]]


void FUN_007980c0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined1 auStack_b0 [28];
  undefined4 uStack_94;
  undefined1 *puStack_90;
  int *piStack_8c;
  undefined1 auStack_88 [28];
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9d346;
  pvStack_14 = ExceptionList;
  piVar4 = *(int **)(in_ECX[1] + 0xd8);
  ExceptionList = &pvStack_14;
  if (piVar4 != (int *)0x0) {
    piStack_3c = (int *)0x7980fd;
    ExceptionList = &pvStack_14;
    cVar1 = (**(code **)(*piVar4 + 0x20))();
    if (cVar1 != '\0') {
      piStack_3c = (int *)0x798119;
      piVar2 = (int *)FUN_005b6750();
      if (0 < *piVar2) {
        piStack_3c = (int *)0xe4;
        iStack_40 = 0x79812c;
        iVar3 = FUN_00aae9af();
        iStack_c = 0;
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piStack_3c = (int *)0x798146;
          uStack_64 = FUN_005b6140();
          puStack_68 = auStack_60;
          uStack_6c = 0x798156;
          FUN_0072d4e0();
          puStack_90 = auStack_88;
          iStack_c._0_1_ = 1;
          uStack_94 = 0x79816b;
          piStack_8c = piVar4;
          FUN_0072d4e0();
          iStack_c._0_1_ = 2;
          FUN_0079de40(auStack_b0,in_ECX[1]);
          iStack_c = (uint)iStack_c._1_3_ << 8;
          piVar4 = (int *)FUN_00788ea0(iVar3,in_ECX[0x4e],in_ECX);
        }
        iStack_c = 0xffffffff;
        piStack_3c = (int *)0x7981bf;
        FUN_00641630();
        piStack_3c = (int *)0x7981d1;
        FUN_006416a0();
        iStack_40 = 0x7981dd;
        piStack_3c = piVar4;
        FUN_006480e0();
        piStack_3c = (int *)0x7981e6;
        (**(code **)(*piVar4 + 0x28))();
        ExceptionList = pvStack_14;
        return;
      }
    }
  }
  piStack_3c = (int *)0x8c;
  iStack_40 = 0x798204;
  iVar3 = FUN_00aae9af();
  iStack_c = 3;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    piStack_3c = (int *)0x79821e;
    piStack_3c = (int *)FUN_005b6140();
    iStack_40 = in_ECX[1];
    uStack_48 = 0x798229;
    iStack_44 = iVar3;
    uVar5 = FUN_005dd5b0();
  }
  iStack_c = 0xffffffff;
  piStack_3c = (int *)0x79824a;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  iStack_40 = 0x798255;
  piStack_3c = (int *)uVar5;
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))();
  iStack_40 = 0x798262;
  (**(code **)(*(int *)(*in_ECX + 0x18) + 0x38))();
  ExceptionList = pvStack_18;
  return;
}

