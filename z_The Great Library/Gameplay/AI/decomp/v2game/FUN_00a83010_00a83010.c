// FUN_00a83010 @ 00a83010 body=[[00a83010, 00a830ae] [00a830b2, 00a830d7] [00a830db, 00a830f3] [00a830f7, 00a83112] [00a83116, 00a83132] [00a83136, 00a83153]]


void FUN_00a83010(void)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a5a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e44384;
  local_8 = 4;
  iVar2 = 0;
  if (0 < (int)(in_ECX[0x1c] - in_ECX[0x1b] & 0xfffffffc)) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[0x1b] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(in_ECX[0x1c] - in_ECX[0x1b]) >> 2);
  }
  _Dst = (void *)in_ECX[0x1b];
  if (_Dst != (void *)in_ECX[0x1c]) {
    FID_conflict__memcpy(_Dst,(void *)in_ECX[0x1c],0);
    in_ECX[0x1c] = _Dst;
  }
  if (0xf < (uint)in_ECX[0x24]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1f]);
  }
  in_ECX[0x24] = 0xf;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  if (in_ECX[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1b]);
  }
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  if ((uint)in_ECX[0x18] < 0x10) {
    in_ECX[0x18] = 0xf;
    in_ECX[0x17] = 0;
    *(undefined1 *)(in_ECX + 0x13) = 0;
    if (0xf < (uint)in_ECX[0x10]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0xb]);
    }
    in_ECX[0x10] = 0xf;
    in_ECX[0xf] = 0;
    *(undefined1 *)(in_ECX + 0xb) = 0;
    if ((uint)in_ECX[9] < 0x10) {
      in_ECX[9] = 0xf;
      in_ECX[8] = 0;
      *(undefined1 *)(in_ECX + 4) = 0;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[4]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x13]);
}

