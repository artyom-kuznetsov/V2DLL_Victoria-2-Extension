// FUN_00450b90 @ 00450b90 body=[[00450b90, 00450c3f]]


/* WARNING: Removing unreachable block (ram,0x00450bd5) */
/* WARNING: Removing unreachable block (ram,0x00450be9) */

void FUN_00450b90(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  int local_8;
  
  cVar2 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1c) + 0x28))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100
                    );
    FUN_0093d690();
    *(undefined1 *)(iVar1 + 0x14) = 1;
    return;
  }
  piVar3 = (int *)(in_ECX + 0x2d4);
  local_8 = 0xb;
  do {
    if (*piVar3 != piVar3[1]) {
      piVar3[1] = *piVar3;
    }
    piVar3 = piVar3 + 4;
    local_8 = local_8 + -1;
    *(undefined1 *)(in_ECX + 0x3bb) = 1;
  } while (local_8 != 0);
  return;
}

