// FUN_00674ce0 @ 00674ce0 body=[[00674ce0, 00674d8a] [00674d8e, 00674db6] [00674dba, 00674e2d] [00674e31, 00674f13] [00674f17, 00674f7d] [00674f81, 00674fe1] [00674fe5, 00675042]]


void FUN_00674ce0(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int in_ECX;
  uint unaff_EBX;
  undefined1 *puVar7;
  undefined4 uStack_58;
  undefined1 local_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_44 [4];
  uint local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7f0ec;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("settings",8);
  local_c = 0;
  auStack_44[2] = 0xf;
  auStack_44[1] = 0;
  local_50[0] = 0;
  FUN_00409350("menu_message_settings",0x15);
  local_c = CONCAT31(local_c._1_3_,1);
  puVar7 = local_50;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(auStack_44 + 3);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))();
  if (0xf < auStack_44[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  pvStack_14 = (void *)0xffffffff;
  auStack_44[0] = 0xf;
  uStack_48 = 0;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_44[2]);
  }
  auStack_44[2] = auStack_44[2] & 0xffffff00;
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      pvStack_14 = (void *)0xffffffff;
      uStack_28 = 0xf;
      uStack_2c = 0;
      auStack_44[2] = auStack_44[2] & 0xffffff00;
      FUN_00409350("message",7);
      pvStack_14 = (void *)0x2;
      iVar3 = (**(code **)(**(int **)(*piVar2 + 0x20) + 0x34))(auStack_44 + 2);
      pvStack_14 = (void *)0xffffffff;
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_44[2]);
      }
      if (iVar3 == param_1) break;
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        ExceptionList = pvStack_1c;
        return;
      }
    }
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      if (*(int *)(in_ECX + 0x718) != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x718) + 0x30) + 0x18) + 0x38))();
        if (*(undefined4 **)(in_ECX + 0x718) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(in_ECX + 0x718))(1);
        }
      }
      iVar4 = FUN_00aae9af(0x148);
      pvStack_14 = (void *)0x3;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uStack_28 = 0xf;
        uStack_2c = 0;
        auStack_44[2] = auStack_44[2] & 0xffffff00;
        FUN_00409350("MessageSettingWindow",0x14);
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
        unaff_EBX = 1;
        uVar5 = FUN_006a6320(iVar4,in_ECX,auStack_44 + 2,*(undefined4 *)(iVar3 + 0x28));
      }
      pvStack_14 = (void *)0xffffffff;
      *(undefined4 *)(in_ECX + 0x718) = uVar5;
      if (((unaff_EBX & 1) != 0) && (0xf < uStack_28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_44[2]);
      }
      uStack_28 = 0xf;
      uStack_2c = 0;
      auStack_44[2] = auStack_44[2] & 0xffffff00;
      FUN_00409350("ok_button",9);
      pvStack_14 = (void *)0x6;
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x718) + 0x30) + 0x34))(auStack_44 + 2);
      (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x720);
      pvStack_1c = (void *)0xffffffff;
      if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_44[0]);
      }
      uStack_30 = 0xf;
      local_34 = 0;
      auStack_44[0] = auStack_44[0] & 0xffffff00;
      FUN_00409350("cancel_button",0xd);
      pvStack_1c = (void *)0x7;
      iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x718) + 0x30) + 0x34))(auStack_44);
      (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x720);
      local_24 = 0xffffffff;
      if (0xf < auStack_44[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_4c);
      }
      iVar3 = (**(code **)(*(int *)(puVar7 + 0x1c) + 0x40))(&stack0xffffff90);
      uVar1 = *(undefined2 *)(iVar3 + 2);
      puVar6 = (undefined2 *)(**(code **)(*(int *)(puVar7 + 0x1c) + 0x40))(&stack0xffffff90);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x718) + 0x30) + 0x18))(CONCAT22(uVar1,*puVar6));
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

