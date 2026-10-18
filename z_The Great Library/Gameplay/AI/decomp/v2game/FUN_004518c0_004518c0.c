// FUN_004518c0 @ 004518c0 body=[[004518c0, 00451923]]


/* WARNING: Removing unreachable block (ram,0x004518e8) */
/* WARNING: Removing unreachable block (ram,0x004518fc) */

void FUN_004518c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 5;
  piVar2 = (int *)(param_1 + 0x324);
  do {
    if (iVar1 != param_2) {
      if (*piVar2 != piVar2[1]) {
        piVar2[1] = *piVar2;
      }
      *(undefined1 *)(param_1 + 0x3bb) = 1;
      FUN_0044fe40(param_1,iVar1,0,0);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 0xb);
  return;
}

