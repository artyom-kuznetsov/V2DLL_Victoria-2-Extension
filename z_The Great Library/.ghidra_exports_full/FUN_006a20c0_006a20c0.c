// FUN_006a20c0 @ 006a20c0 body=[[006a20c0, 006a20de] [006a20e2, 006a2105] [006a2109, 006a211f] [006a2123, 006a213f]]


void FUN_006a20c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 0xd;
    do {
      if (puVar2[5] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[5]);
      }
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      if (puVar2[-1] != 0) {
        FUN_006a2140(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-1]);
      }
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      if (0xf < (uint)puVar2[-3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-8]);
      }
      puVar2[-3] = 0xf;
      puVar2[-4] = 0;
      *(undefined1 *)(puVar2 + -8) = 0;
      puVar1 = puVar2 + 9;
      puVar2 = puVar2 + 0x16;
    } while (puVar1 != param_1);
  }
  return;
}

