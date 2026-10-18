// FUN_009e5eb0 @ 009e5eb0 body=[[009e5eb0, 009e5f21] [009e5f25, 009e5f4c] [009e5f50, 009e5f8d] [009e5f91, 009e6044]]


int * FUN_009e5eb0(int param_1,char *param_2)

{
  DWORD *pDVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  LPSTR lpsz;
  undefined4 *puVar7;
  char *in_EDX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fe40;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  pcVar6 = in_EDX;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar6 - (int)(in_EDX + 1));
  local_8 = 0;
  local_14 = (int *)(**(code **)(*DAT_01258a80 + 0x3c))(local_4c);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_0068f390();
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  pcVar6 = param_2;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(param_2,(int)pcVar6 - (int)(param_2 + 1));
  local_8 = 1;
  FUN_00a840b0();
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  iVar3 = *(int *)(param_1 + 0x2dc);
  iVar4 = (*(int *)(param_1 + 0x2e0) - iVar3) / 0x1c;
  lpsz = (LPSTR)(iVar3 + -0x1c + iVar4 * 0x1c);
  pDVar1 = (DWORD *)(lpsz + 0x10);
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < *(uint *)(iVar3 + -8 + iVar4 * 0x1c)) {
    lpsz = *(LPSTR *)lpsz;
  }
  CharLowerBuffA(lpsz,*pDVar1);
  piVar5 = local_14;
  (**(code **)(*local_14 + 100))(*(undefined4 *)(param_1 + 0x494));
  iVar3 = *(int *)(param_1 + 0x74);
  puVar7 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = piVar5;
    puVar7[1] = iVar3;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(undefined4 **)(param_1 + 0x74) = puVar7;
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (iVar4 == 0) {
    *(undefined4 **)(param_1 + 0x70) = puVar7;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar7;
  }
  ExceptionList = local_10;
  return piVar5;
}

