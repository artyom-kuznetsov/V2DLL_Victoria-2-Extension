// FUN_00a1c260 @ 00a1c260 body=[[00a1c260, 00a1c42c]]


int FUN_00a1c260(int *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_EDI;
  uint local_c;
  int local_8;
  
  iVar6 = 0;
  *param_1 = 0;
  iVar5 = unaff_EDI[3];
  iVar2 = unaff_EDI[0x1e];
  *param_2 = 0;
  pcVar3 = (char *)*unaff_EDI;
  cVar1 = *pcVar3;
  *param_3 = 0;
  if (cVar1 == '\0') {
    *(int *)(pcVar3 + 0x1c) = iVar5 + iVar2;
  }
  else {
    if (pcVar3[1] == '\0') {
      return -1;
    }
    SetFilePointer(*(HANDLE *)(pcVar3 + 4),*(int *)(pcVar3 + 0xc) + iVar5 + iVar2,(PLONG)0x0,0);
  }
  iVar5 = FUN_00a1bae0(&local_8);
  if (iVar5 == 0) {
    if (local_8 != 0x4034b50) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1ba50(&local_8);
  if (iVar5 != 0) {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1ba50(&local_c);
  if (iVar5 != 0) {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1ba50(&local_8);
  if (iVar5 == 0) {
    if ((iVar6 == 0) &&
       ((iVar5 = unaff_EDI[0xd], local_8 != iVar5 || ((iVar5 != 0 && (iVar5 != 8)))))) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1bae0(&local_8);
  if (iVar5 != 0) {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1bae0(&local_8);
  uVar4 = local_c;
  if (iVar5 == 0) {
    if (((iVar6 == 0) && (local_8 != unaff_EDI[0xf])) && ((local_c & 8) == 0)) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1bae0(&local_8);
  if (iVar5 == 0) {
    if (((iVar6 == 0) && (local_8 != unaff_EDI[0x10])) && ((uVar4 & 8) == 0)) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1bae0(&local_8);
  if (iVar5 == 0) {
    if (((iVar6 == 0) && (local_8 != unaff_EDI[0x11])) && ((uVar4 & 8) == 0)) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  iVar5 = FUN_00a1ba50(&local_c);
  uVar4 = local_c;
  if (iVar5 == 0) {
    if ((iVar6 == 0) && (local_c != unaff_EDI[0x12])) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  *param_1 = *param_1 + local_c;
  iVar5 = FUN_00a1ba50(&local_c);
  if (iVar5 != 0) {
    iVar6 = -1;
  }
  *param_2 = unaff_EDI[0x1e] + 0x1e + uVar4;
  *param_1 = *param_1 + local_c;
  *param_3 = local_c;
  return iVar6;
}

