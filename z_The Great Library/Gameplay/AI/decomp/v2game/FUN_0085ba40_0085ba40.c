// FUN_0085ba40 @ 0085ba40 body=[[0085ba40, 0085ba8c] [0085ba90, 0085babd] [0085bac4, 0085badf]]


void FUN_0085ba40(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int in_EDX;
  int unaff_ESI;
  int local_8;
  
  if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + in_EAX * 4) + 300) !=
      *(int *)(unaff_ESI + 0xc)) {
    if (in_EDX != 0) {
      FUN_0085c2b0(in_EDX);
    }
    local_8 = 0x28;
    if (*(int *)(unaff_ESI + 0x1c) == 1) {
      local_8 = 0x3c;
    }
    iVar1 = *(int *)(unaff_ESI + 0x28);
    while (local_8 < iVar1) {
      piVar2 = *(int **)(unaff_ESI + 0x24);
      if (piVar2 != (int *)0x0) {
        if (*(char *)(unaff_ESI + 0x2c) == '\0') {
          iVar1 = piVar2[1];
          *(int *)(unaff_ESI + 0x24) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(unaff_ESI + 0x20) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 8) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar2);
        }
        *(undefined1 *)(piVar2 + 3) = 1;
      }
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      iVar1 = *(int *)(unaff_ESI + 0x28);
    }
  }
  return;
}

