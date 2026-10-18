// FUN_006518e0 @ 006518e0 body=[[006518e0, 00651958] [0065195c, 00651999]]


void FUN_006518e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3def8;
  puVar1 = *(undefined4 **)(in_ECX + 0x1618);
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar3;
    if (puVar1 == (undefined4 *)0x0) {
      for (iVar2 = *(int *)(DAT_012588e8 + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
        *(undefined1 *)(iVar2 + 0x29) = 1;
      }
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("shield",6);
    local_8 = 0;
    (**(code **)(*(int *)*puVar1 + 0x48))(local_2c);
    FUN_009a8b10();
    local_8 = 0xffffffff;
    if (0xf < local_18) break;
    puVar1 = (undefined4 *)puVar1[2];
    local_2c[0] = local_2c[0] & 0xffffff00;
    ppvVar3 = ExceptionList;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

