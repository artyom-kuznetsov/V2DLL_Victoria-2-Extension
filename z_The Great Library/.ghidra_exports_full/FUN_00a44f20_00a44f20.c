// FUN_00a44f20 @ 00a44f20 body=[[00a44f20, 00a44fb1] [00a44fb7, 00a44fd3] [00a44fd9, 00a45003]]


void FUN_00a44f20(void)

{
  void *_Dst;
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d996;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e384c4;
  local_8 = 3;
  for (puVar2 = (undefined4 *)in_ECX[1];
      ((undefined4 *)in_ECX[1] <= puVar2 && (puVar2 < (undefined4 *)in_ECX[2])); puVar2 = puVar2 + 1
      ) {
    (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
  }
  _Dst = (void *)in_ECX[1];
  if (_Dst != (void *)in_ECX[2]) {
    FID_conflict__memcpy(_Dst,(void *)in_ECX[2],0);
    in_ECX[2] = _Dst;
  }
  puVar2 = (undefined4 *)in_ECX[0x10];
  if (puVar2 == (undefined4 *)0x0) {
    in_ECX[0x10] = 0;
    in_ECX[0x11] = 0;
    in_ECX[0x12] = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00462440(*(undefined4 *)in_ECX[10],(undefined4 *)in_ECX[10]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  while( true ) {
    if (puVar2 == puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x10]);
    }
    if (0xf < (uint)puVar2[5]) break;
    puVar2[5] = 0xf;
    puVar2[4] = 0;
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar2);
}

