// FUN_00b14fa0 @ 00b14fa0 body=[[00b14fa0, 00b15029] [00b15030, 00b15267]]


undefined4 * FUN_00b14fa0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b39cc0;
  local_c = ExceptionList;
  uVar6 = DAT_00ef259c ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 1;
  local_4 = 1;
  if (*in_ECX == 0) {
    *(undefined2 *)(param_1 + 3) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00b0fee0(&local_1c);
  }
  else {
    iVar10 = 0;
    uVar7 = 0;
    if (in_ECX[1] != 0) {
      do {
        if (*(char *)(*in_ECX + uVar7) == (char)param_2) {
          iVar10 = iVar10 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)in_ECX[1]);
    }
    if (iVar10 + 1 != 0) {
      FUN_00adfdb0(iVar10 + 1);
    }
    iVar10 = 0;
    iVar9 = 0;
    cVar3 = *(char *)*in_ECX;
    uVar7 = local_18;
    while (local_18 = uVar7, cVar3 != '\0') {
      if (cVar3 == (char)param_2) {
        local_18 = uVar7 + 1;
        if (local_14 < local_18) {
          FUN_00adfdb0(uVar7 + 2);
        }
        puVar1 = (undefined4 *)(local_1c + (local_18 * 3 + -3) * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        iVar4 = *in_ECX;
        uVar7 = iVar10 - iVar9;
        piVar2 = (int *)(local_1c + -0xc + local_18 * 0xc);
        puVar5 = (undefined1 *)*piVar2;
        if ((void *)(iVar4 + iVar9) == (void *)0x0) {
          if (puVar5 != (undefined1 *)0x0) {
            (*(code *)PTR__free_00f01b10)(puVar5);
            *piVar2 = 0;
            piVar2[1] = 0;
            piVar2[2] = 0;
          }
        }
        else {
          if (puVar5 != (undefined1 *)0x0) {
            piVar2[1] = 0;
            *puVar5 = 0;
          }
          if (((uint)piVar2[2] < uVar7) || (iVar8 = *piVar2, iVar8 == 0)) {
            piVar2[1] = uVar7;
            piVar2[2] = uVar7;
            if (*piVar2 == 0) {
              iVar8 = (*(code *)PTR_FUN_00f01b08)(uVar7 + 1,2,4,1,0,0xffffffff,uVar6);
            }
            else {
              iVar8 = (*(code *)PTR_FUN_00f01b0c)(*piVar2);
            }
            *piVar2 = iVar8;
            if (iVar8 == 0) goto LAB_00b15142;
          }
          else {
            piVar2[1] = uVar7;
          }
          *(undefined1 *)(iVar8 + uVar7) = 0;
          if ((void *)*piVar2 != (void *)0x0) {
            FID_conflict__memcpy((void *)*piVar2,(void *)(iVar4 + iVar9),uVar7);
          }
        }
LAB_00b15142:
        iVar9 = iVar10 + 1;
      }
      iVar4 = iVar10 + 1;
      iVar10 = iVar10 + 1;
      uVar7 = local_18;
      cVar3 = *(char *)(iVar4 + *in_ECX);
    }
    if (iVar9 != iVar10) {
      local_18 = uVar7 + 1;
      if (local_14 < local_18) {
        FUN_00adfdb0(uVar7 + 2);
      }
      puVar1 = (undefined4 *)(local_1c + (local_18 * 3 + -3) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      FUN_00b137d0(*in_ECX + iVar9,iVar10 - iVar9);
    }
    if (local_18 == 0) {
      param_2._1_1_ = 0;
      if (((*in_ECX != 0) && (iVar10 = FUN_00aafe90(*in_ECX,&param_2), iVar10 != 0)) &&
         (iVar10 - *in_ECX != -1)) {
        uVar6 = local_18 + 1;
        if (local_14 < uVar6) {
          iVar10 = local_18 + 2;
          local_18 = uVar6;
          FUN_00adfdb0(iVar10);
          uVar6 = local_18;
        }
        local_18 = uVar6;
        FUN_00b0b790(local_18 - 1,in_ECX);
      }
    }
    *(undefined2 *)(param_1 + 3) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00b0fee0(&local_1c);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00b00960();
  ExceptionList = local_c;
  return param_1;
}

