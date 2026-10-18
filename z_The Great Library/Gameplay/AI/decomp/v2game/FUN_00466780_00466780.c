// FUN_00466780 @ 00466780 body=[[00466780, 0046687d] [00466881, 0046689e] [004668a2, 004668b2]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00466780(void)

{
  void **ppvVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 in_ECX;
  uint *in_EDX;
  undefined4 *puVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_18;
  void *local_14 [4];
  
  local_14[2] = &LAB_00b53c08;
  local_14[1] = ExceptionList;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_14[3] = (void *)0x0;
  ExceptionList = local_14 + 1;
  FUN_0045be80(in_ECX,&local_28);
  iVar3 = ((int)local_24 - (int)local_28) / 0x1c;
  puVar6 = local_28;
  if (0 < iVar3) {
    do {
      local_18 = iVar3;
      puVar4 = puVar6;
      if (0xf < (uint)puVar6[5]) {
        puVar4 = (undefined4 *)*puVar6;
      }
      pvVar5 = (void *)FUN_00aaf0c5(puVar4);
      ppvVar1 = (void **)in_EDX[1];
      local_14[0] = pvVar5;
      if ((local_14 < ppvVar1) && (ppvVar2 = (void **)*in_EDX, ppvVar2 <= local_14)) {
        if (ppvVar1 == (void **)in_EDX[2]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)in_EDX[1] != (undefined4 *)0x0) {
          *(undefined4 *)in_EDX[1] =
               *(undefined4 *)(*in_EDX + ((int)local_14 - (int)ppvVar2 >> 2) * 4);
        }
      }
      else {
        if (ppvVar1 == (void **)in_EDX[2]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)in_EDX[1] != (undefined4 *)0x0) {
          *(undefined4 *)in_EDX[1] = pvVar5;
        }
      }
      in_EDX[1] = in_EDX[1] + 4;
      puVar6 = puVar6 + 7;
      iVar3 = local_18 + -1;
    } while (local_18 + -1 != 0);
    local_18 = 0;
  }
  puVar6 = local_28;
  if (local_28 == (undefined4 *)0x0) {
    ExceptionList = local_14[1];
    return;
  }
  while( true ) {
    if (puVar6 == local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
    if (0xf < (uint)puVar6[5]) break;
    puVar6[5] = 0xf;
    puVar6[4] = 0;
    *(undefined1 *)puVar6 = 0;
    puVar6 = puVar6 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar6);
}

