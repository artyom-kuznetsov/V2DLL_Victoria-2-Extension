// FUN_00673d30 @ 00673d30 body=[[00673d30, 00673e0b] [00673e0f, 00673e39] [00673e42, 00673e9f] [00673ea3, 00673ef0] [00673ef6, 00673f8e] [00673f92, 00673fd8] [00673fdc, 00673ff0]]


void FUN_00673d30(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR ***lpsz;
  int in_ECX;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  LPSTR **pppCStack_94;
  undefined1 local_90 [12];
  DWORD DStack_84;
  uint uStack_80;
  uint uStack_78;
  undefined1 local_6c [4];
  undefined4 uStack_68;
  uint uStack_64;
  uint local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  undefined1 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 local_3c [4];
  uint uStack_2c;
  void *pvStack_20;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6f680;
  pvStack_14 = ExceptionList;
  piVar1 = (int *)(in_ECX + 0x6f8);
  ExceptionList = &pvStack_14;
  FUN_004138b0(piVar1,local_90,*(undefined4 *)(in_ECX + 0x6f8),*(undefined4 *)(in_ECX + 0x6fc));
  local_3c[0] = 0xf;
  local_40 = 0;
  local_50 = 0;
  FUN_00409350("search_edit",0xb);
  local_c = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  FUN_00409350("menu_message_settings",0x15);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_6c);
  iVar4 = (**(code **)(*piVar3 + 0x40))(auStack_54);
  (**(code **)(*(int *)(iVar4 + 0x54) + 0x4c))(local_3c);
  if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_78);
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  uStack_18 = 4;
  if (uStack_48 < 0x10) {
    uStack_48 = 0xf;
    uStack_4c = 0;
    local_5c = local_5c & 0xffffff00;
    uStack_80 = 0xf;
    DStack_84 = 0;
    pppCStack_94 = (LPSTR **)((uint)pppCStack_94 & 0xffffff00);
    FUN_00409350(&DAT_00ded94d,0);
    uStack_18 = 5;
    cVar2 = FUN_00416db0();
    uStack_18 = 4;
    if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pppCStack_94);
    }
    iVar4 = in_ECX;
    if (cVar2 == '\0') {
      uVar5 = FUN_00989510(&pppCStack_94,0x20);
      uStack_18 = 6;
      FUN_004134a0(uVar5);
      uStack_18 = 4;
      if ((LPSTR ***)pppCStack_94 != (LPSTR ***)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppCStack_94);
      }
      iVar7 = 0;
      iVar4 = unaff_EBX;
      if (0 < (*(int *)(in_ECX + 0x6fc) - *piVar1) / 0x1c) {
        iVar6 = 0;
        do {
          uStack_18 = 4;
          uStack_80 = 0xf;
          DStack_84 = 0;
          pppCStack_94 = (LPSTR **)((uint)pppCStack_94 & 0xffffff00);
          FUN_00408ed0(*piVar1 + iVar6,0,0xffffffff);
          uStack_18 = 7;
          lpsz = (LPSTR ***)pppCStack_94;
          if (uStack_80 < 0x10) {
            lpsz = &pppCStack_94;
          }
          CharLowerBuffA((LPSTR)lpsz,DStack_84);
          FUN_00408ed0(&pppCStack_94,0,0xffffffff);
          uStack_18 = 4;
          if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pppCStack_94);
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar7 < (*(int *)(in_ECX + 0x6fc) - *piVar1) / 0x1c);
      }
    }
    uStack_18 = 4;
    FUN_006742d0(iVar4);
    if (uStack_2c < 0x10) {
      ExceptionList = pvStack_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_5c);
}

