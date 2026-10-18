// FUN_00adb860 @ 00adb860 body=[[00adb860, 00adbac7]]


int * FUN_00adb860(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iStack_6c;
  int aiStack_68 [3];
  undefined2 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined *puStack_44;
  undefined1 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b375ad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = (**(code **)(*param_1 + 4))(DAT_00ef259c ^ (uint)&stack0xffffff84);
  if (iVar3 != 2) {
    FUN_00b15d30("Given file is not a memory file. Cannot process pre-passes.");
    ExceptionList = local_c;
    return (int *)0x0;
  }
  FUN_00b00ea0();
  piStack_58 = piVar1;
  piStack_54 = piVar1;
  cVar2 = FUN_00aed9c0(in_ECX + 4,&piStack_58,0,0);
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  uStack_4 = 0;
  uStack_5c = 600;
  FUN_00ada510(aiStack_68);
  param_1 = (int *)0x0;
  cVar2 = FUN_00ad97a0(piVar1,&param_1,&iStack_6c);
  if (cVar2 == '\0') {
    FUN_00ada0f0(aiStack_68);
    (**(code **)(*piVar1 + 100))();
    uStack_4 = 0xffffffff;
    if (aiStack_68[0] == 0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    (*(code *)PTR__free_00f01b10)(aiStack_68[0]);
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if (iStack_6c == 0) {
    iStack_6c = FUN_00ad95f0(0x54);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (iStack_6c != 0) {
      piVar4 = (int *)FUN_00b015a0("<Unknown>");
      goto LAB_00adb9c1;
    }
  }
  else {
    if (iStack_6c != 1) {
      piVar4 = (int *)0x0;
      goto LAB_00adb9c1;
    }
    iStack_6c = FUN_00ad9610(0xb8);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    if (iStack_6c != 0) {
      piVar4 = (int *)FUN_00b04d90("<Unknown>");
      goto LAB_00adb9c1;
    }
  }
  piVar4 = (int *)0x0;
LAB_00adb9c1:
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  puStack_44 = &DAT_01010100;
  uStack_40 = 1;
  uStack_30 = 600;
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  if (param_2 != 0) {
    FUN_00adcd90(param_2);
  }
  piStack_14 = aiStack_68;
  ppuStack_1c = &puStack_44;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = param_1;
  piStack_28 = piVar4;
  do {
    cVar2 = FUN_00ada140(piVar1,&uStack_2c);
  } while (cVar2 != '\0');
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar1 + 100))();
  FUN_00ada0f0(aiStack_68);
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
  if (aiStack_68[0] != 0) {
    (*(code *)PTR__free_00f01b10)(aiStack_68[0]);
    aiStack_68[0] = 0;
  }
  uStack_4 = uStack_4 & 0xffffff00;
  if (iStack_3c != 0) {
    (*(code *)PTR__free_00f01b10)(iStack_3c);
  }
  uStack_4 = 0xffffffff;
  if (aiStack_68[0] != 0) {
    (*(code *)PTR__free_00f01b10)(aiStack_68[0]);
    ExceptionList = local_c;
    return piVar4;
  }
  ExceptionList = local_c;
  return piVar4;
}

