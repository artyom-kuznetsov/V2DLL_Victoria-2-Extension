// FUN_00adbe20 @ 00adbe20 body=[[00adbe20, 00adc146]]


int FUN_00adbe20(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uStack_9c;
  int aiStack_98 [3];
  undefined2 uStack_8c;
  undefined4 uStack_88;
  int aiStack_84 [3];
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  uint uStack_68;
  int iStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined1 auStack_4c [12];
  int iStack_40;
  int iStack_30;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b37657;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = (**(code **)(*param_1 + 4))(DAT_00ef259c ^ (uint)&stack0xffffff54);
  if (iVar2 == 2) {
    FUN_00b00ea0();
    iVar2 = 0;
    piStack_60 = param_1;
    piStack_5c = param_1;
    if (param_2 != 0) {
      iVar2 = param_2 + 0x30;
    }
    cVar1 = FUN_00aed9c0(in_ECX + 4,&piStack_60,0,iVar2);
    if (cVar1 != '\0') {
      aiStack_98[0] = 0;
      aiStack_98[1] = 0;
      aiStack_98[2] = 0;
      iStack_4 = 0;
      uStack_8c = 600;
      FUN_00ada510(aiStack_98);
      uStack_9c = 0;
      uStack_88 = 0;
      cVar1 = FUN_00ad9630(param_1,&uStack_9c,&uStack_88);
      if (cVar1 != '\0') {
        iStack_64 = (*(code *)PTR_FUN_00f01b08)(0x114,0x191,4,0,0,0xffffffff);
        iStack_4._0_1_ = 1;
        if (iStack_64 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_00ad59e0("Unnamed actor");
        }
        iStack_4._0_1_ = 0;
        FUN_00ad4710(uStack_88);
        FUN_00adcc60();
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        if (param_2 != 0) {
          FUN_00adcf80(param_2);
        }
        FUN_00adb700(auStack_4c);
        piStack_6c = aiStack_98;
        puStack_78 = auStack_4c;
        aiStack_84[1] = 0;
        aiStack_84[2] = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_68 = uStack_9c;
        aiStack_84[0] = iVar2;
        do {
          cVar1 = FUN_00ada140(param_1,aiStack_84);
        } while (cVar1 != '\0');
        FUN_00aecc00(*(undefined4 *)(iVar2 + 0x84),1);
        FUN_00aecc00(*(undefined4 *)(iVar2 + 0x84),1);
        uStack_9c = *(uint *)(iVar2 + 0x84);
        uVar5 = 0;
        if (uStack_9c != 0) {
          do {
            iVar4 = *(int *)(*(int *)(iVar2 + 0x80) + uVar5 * 4);
            iVar3 = *(int *)(iVar4 + 0x1c);
            if ((*(int *)(iVar3 + 0x14) != 0) &&
               (iVar3 = (**(code **)(**(int **)(iVar3 + 0x14) + 0x10))(), iVar3 != 0)) {
              FUN_00aeaf60(iVar2);
            }
            iVar4 = *(int *)(iVar4 + 0x1c);
            if ((*(int *)(iVar4 + 0x1c) != 0) &&
               (iVar4 = (**(code **)(**(int **)(iVar4 + 0x1c) + 0x10))(), iVar4 != 0)) {
              FUN_00aeaf60(iVar2);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uStack_9c);
        }
        (**(code **)(*param_1 + 100))();
        FUN_00ada0f0(aiStack_98);
        aiStack_98[1] = 0;
        aiStack_98[2] = 0;
        if (aiStack_98[0] != 0) {
          (*(code *)PTR__free_00f01b10)(aiStack_98[0]);
          aiStack_98[0] = 0;
        }
        iStack_4._0_1_ = 4;
        if (iStack_1c != 0) {
          (*(code *)PTR__free_00f01b10)(iStack_1c);
        }
        iStack_4._0_1_ = 3;
        if (iStack_30 != 0) {
          (*(code *)PTR__free_00f01b10)(iStack_30);
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (iStack_40 != 0) {
          (*(code *)PTR__free_00f01b10)(iStack_40);
        }
        iStack_4 = 0xffffffff;
        if (aiStack_98[0] == 0) {
          ExceptionList = local_c;
          return iVar2;
        }
        (*(code *)PTR__free_00f01b10)(aiStack_98[0]);
        ExceptionList = local_c;
        return iVar2;
      }
      FUN_00ada0f0(aiStack_98);
      (**(code **)(*param_1 + 100))();
      iStack_4 = 0xffffffff;
      if (aiStack_98[0] != 0) {
        (*(code *)PTR__free_00f01b10)(aiStack_98[0]);
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  else {
    FUN_00b15d30("Given file is not a memory file. Cannot process pre-passes.");
  }
  ExceptionList = local_c;
  return 0;
}

