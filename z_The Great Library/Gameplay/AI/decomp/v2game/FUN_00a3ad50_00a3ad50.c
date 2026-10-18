// FUN_00a3ad50 @ 00a3ad50 body=[[00a3ad50, 00a3ae10]]


void FUN_00a3ad50(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_01109b64 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0xc);
    local_8 = 0;
    if (iVar2 == 0) {
      DAT_01109b64 = 0;
    }
    else {
      DAT_01109b64 = FUN_009880e0();
    }
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(DAT_01109b64 + 8) + (unaff_EDI % *(uint *)(DAT_01109b64 + 4)) * 4);
  do {
    if (piVar1 == (int *)0x0) {
LAB_00a3adcd:
      puVar3 = (uint *)FUN_00aae9af(8);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        *puVar3 = unaff_EDI;
        puVar3[1] = param_1;
      }
      FUN_00a3af00(puVar3);
      ExceptionList = local_10;
      return;
    }
    puVar3 = (uint *)*piVar1;
    if (*puVar3 == unaff_EDI) {
      if (puVar3 != (uint *)0x0) {
        puVar3[1] = param_1;
        ExceptionList = local_10;
        return;
      }
      goto LAB_00a3adcd;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

