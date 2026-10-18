// FUN_00a1bbe0 @ 00a1bbe0 body=[[00a1bbe0, 00a1bd5b]]


int FUN_00a1bbe0(char *param_1)

{
  int iVar1;
  DWORD DVar2;
  void *_Memory;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (*param_1 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    if (param_1[1] == '\0') {
      return -1;
    }
    SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,2);
  }
  if (*param_1 == '\0') {
    local_8 = *(uint *)(param_1 + 0x1c);
  }
  else if (param_1[1] == '\0') {
    local_8 = 0;
  }
  else {
    DVar2 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
    local_8 = DVar2 - *(int *)(param_1 + 0xc);
  }
  local_c = 0xffff;
  if (local_8 < 0xffff) {
    local_c = local_8;
  }
  _Memory = _malloc(0x404);
  if (_Memory == (void *)0x0) {
    return -1;
  }
  local_10 = 4;
  local_18 = -1;
  if (local_c < 5) {
LAB_00a1bd49:
    _free(_Memory);
    return local_18;
  }
  do {
    uVar3 = local_10 + 0x400;
    local_10 = local_c;
    if (uVar3 <= local_c) {
      local_10 = uVar3;
    }
    iVar5 = local_8 - local_10;
    local_14 = 0x404;
    if (local_8 - iVar5 < 0x405) {
      local_14 = local_8 - iVar5;
    }
    if (*param_1 == '\0') {
      *(int *)(param_1 + 0x1c) = iVar5;
    }
    else {
      if (param_1[1] == '\0') goto LAB_00a1bd49;
      SetFilePointer(*(HANDLE *)(param_1 + 4),*(int *)(param_1 + 0xc) + iVar5,(PLONG)0x0,0);
    }
    iVar4 = FUN_00a1b9e0(_Memory,local_14,1);
    if (iVar4 != 1) goto LAB_00a1bd49;
    iVar4 = local_14 - 3;
    do {
      iVar1 = iVar4;
      if (iVar1 < 0) goto LAB_00a1bd37;
      iVar4 = iVar1 + -1;
    } while ((((*(char *)(iVar4 + (int)_Memory) != 'P') || (*(char *)(iVar1 + (int)_Memory) != 'K'))
             || (*(char *)(iVar1 + 1 + (int)_Memory) != '\x05')) ||
            (*(char *)(iVar1 + 2 + (int)_Memory) != '\x06'));
    local_18 = iVar4 + iVar5;
LAB_00a1bd37:
    if ((local_18 != 0) || (local_c <= local_10)) goto LAB_00a1bd49;
  } while( true );
}

