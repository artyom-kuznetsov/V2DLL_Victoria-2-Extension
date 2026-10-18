// FUN_004653b0 @ 004653b0 body=[[004653b0, 004654bd] [004654c1, 004654dc] [004654e0, 004654f0]]


void FUN_004653b0(void *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *in_EDX;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined *local_48;
  undefined4 **ppuStack_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined1 *local_24;
  int local_20;
  undefined4 *local_1c;
  void *local_18 [4];
  undefined4 local_8;
  
  local_18[3] = &LAB_00b53c48;
  local_18[2] = ExceptionList;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  ppuStack_44 = &local_34;
  local_8 = 0;
  local_4c = 0x4653e8;
  ExceptionList = local_18 + 2;
  FUN_0045be80();
  iVar3 = ((int)local_30 - (int)local_34) / 0x1c;
  if (0 < iVar3) {
    local_1c = local_34;
    local_20 = iVar3;
    do {
      local_24 = local_5c;
      local_48 = (undefined *)0xf;
      local_4c = 0;
      local_18[0] = param_1;
      local_5c[0] = 0;
      FUN_00408ed0(local_1c,0,0xffffffff);
      FUN_0043bb10();
      ppvVar1 = (void **)in_EDX[1];
      if ((local_18 < ppvVar1) && (ppvVar2 = (void **)*in_EDX, ppvVar2 <= local_18)) {
        if (ppvVar1 == (void **)in_EDX[2]) {
          ppuStack_44 = (undefined4 **)0x465461;
          FUN_004665d0();
        }
        if ((undefined4 *)in_EDX[1] != (undefined4 *)0x0) {
          *(undefined4 *)in_EDX[1] =
               *(undefined4 *)(*in_EDX + ((int)local_18 - (int)ppvVar2 >> 2) * 4);
        }
      }
      else {
        if (ppvVar1 == (void **)in_EDX[2]) {
          ppuStack_44 = (undefined4 **)0x46547d;
          FUN_004665d0();
        }
        if ((undefined4 *)in_EDX[1] != (undefined4 *)0x0) {
          *(undefined4 *)in_EDX[1] = local_18[0];
        }
      }
      in_EDX[1] = in_EDX[1] + 4;
      local_1c = local_1c + 7;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  puVar4 = local_34;
  if (local_34 == (undefined4 *)0x0) {
    ExceptionList = local_18[2];
    return;
  }
  while( true ) {
    if (puVar4 == local_30) {
      ppuStack_44 = (undefined4 **)local_34;
                    /* WARNING: Subroutine does not return */
      local_48 = &UNK_004654dd;
      FUN_00aae91b();
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 7;
  }
  ppuStack_44 = (undefined4 **)*puVar4;
                    /* WARNING: Subroutine does not return */
  local_48 = &UNK_004654be;
  FUN_00aae91b();
}

