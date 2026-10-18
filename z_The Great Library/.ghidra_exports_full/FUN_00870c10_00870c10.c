// FUN_00870c10 @ 00870c10 body=[[00870c10, 00870cf0]]


int FUN_00870c10(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  int iVar4;
  bool bVar5;
  int local_c;
  int local_8;
  
  local_8 = lua_gettop(param_1);
  iVar4 = -1;
  iVar2 = FUN_004f5fc0();
  if (iVar2 == local_8) {
    cVar1 = FUN_00a31490(param_1,1);
    local_c = (-(uint)(cVar1 != '\0') & 0xccccccd) - 1;
    piVar3 = &local_c;
    iVar2 = 0;
    do {
      iVar4 = *piVar3;
      if (iVar4 < 0) break;
      iVar4 = iVar2 + iVar4;
      piVar3 = piVar3 + 1;
      iVar2 = iVar4;
    } while (piVar3 != &local_8);
    if (iVar4 < 0) goto LAB_00870c87;
    bVar5 = iVar4 == *unaff_ESI;
    if (iVar4 < *unaff_ESI) {
      *unaff_ESI = iVar4;
      unaff_ESI[1] = param_2;
      unaff_ESI[0xb] = 1;
      goto LAB_00870c98;
    }
  }
  else {
LAB_00870c87:
    bVar5 = iVar4 == *unaff_ESI;
  }
  if (bVar5) {
    unaff_ESI[unaff_ESI[0xb] + 1] = param_2;
    unaff_ESI[0xb] = unaff_ESI[0xb] + 1;
  }
LAB_00870c98:
  iVar2 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((iVar4 == *unaff_ESI) && (unaff_ESI[0xb] == 1)) {
    FUN_00872d80(DAT_013f1980);
    FUN_00872510();
    FUN_004010c0(param_1,DAT_013f1980,1);
    iVar2 = lua_gettop(param_1);
    iVar2 = iVar2 - local_8;
  }
  return iVar2;
}

