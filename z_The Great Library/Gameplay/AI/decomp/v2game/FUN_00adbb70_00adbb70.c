// FUN_00adbb70 @ 00adbb70 body=[[00adbb70, 00adbda3]]


int * FUN_00adbb70(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int aiStack_64 [3];
  undefined2 uStack_58;
  undefined *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **ppuStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3760e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = (**(code **)(*param_1 + 4))(DAT_00ef259c ^ (uint)&stack0xffffff88);
  if (iVar3 == 2) {
    FUN_00b00ea0();
    piStack_40 = piVar1;
    piStack_3c = piVar1;
    cVar2 = FUN_00aed9c0(in_ECX + 4,&piStack_40,0,0);
    if (cVar2 != '\0') {
      aiStack_64[0] = 0;
      aiStack_64[1] = 0;
      aiStack_64[2] = 0;
      uStack_4 = 0;
      uStack_58 = 600;
      FUN_00ada510(aiStack_64);
      param_1 = (int *)0x0;
      cVar2 = FUN_00ad98e0(piVar1,&param_1);
      if (cVar2 != '\0') {
        iVar3 = (*(code *)PTR_FUN_00f01b08)(0x58,0x12e,4,0,0,0xffffffff);
        uStack_4._0_1_ = 1;
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_00b06e50("<Unknown>");
        }
        iStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        puStack_54 = &DAT_01010100;
        uStack_44 = 600;
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        if (param_2 != 0) {
          FUN_00adcdd0(param_2);
        }
        piStack_14 = aiStack_64;
        ppuStack_18 = &puStack_54;
        uStack_2c = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_10 = param_1;
        piStack_28 = piVar4;
        do {
          cVar2 = FUN_00ada140(piVar1,&uStack_2c);
        } while (cVar2 != '\0');
        (**(code **)(*piVar4 + 0x18))();
        FUN_00b06e20();
        (**(code **)(*piVar1 + 100))();
        FUN_00ada0f0(aiStack_64);
        aiStack_64[1] = 0;
        aiStack_64[2] = 0;
        if (aiStack_64[0] != 0) {
          (*(code *)PTR__free_00f01b10)(aiStack_64[0]);
          aiStack_64[0] = 0;
        }
        uStack_4 = uStack_4 & 0xffffff00;
        if (iStack_50 != 0) {
          (*(code *)PTR__free_00f01b10)(iStack_50);
        }
        uStack_4 = 0xffffffff;
        if (aiStack_64[0] == 0) {
          ExceptionList = local_c;
          return piVar4;
        }
        (*(code *)PTR__free_00f01b10)(aiStack_64[0]);
        ExceptionList = local_c;
        return piVar4;
      }
      FUN_00ada0f0(aiStack_64);
      (**(code **)(*piVar1 + 100))();
      uStack_4 = 0xffffffff;
      if (aiStack_64[0] != 0) {
        (*(code *)PTR__free_00f01b10)(aiStack_64[0]);
        ExceptionList = local_c;
        return (int *)0x0;
      }
    }
  }
  else {
    FUN_00b15d30("Given file is not a memory file. Cannot process pre-passes.");
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

