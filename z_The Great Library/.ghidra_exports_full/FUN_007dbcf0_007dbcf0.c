// FUN_007dbcf0 @ 007dbcf0 body=[[007dbcf0, 007dbd6f] [007dbd79, 007dbd96] [007dbda0, 007dbdc4]]


/* WARNING: Removing unreachable block (ram,0x007dbd95) */
/* WARNING: Removing unreachable block (ram,0x007dbda0) */

void FUN_007dbcf0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar3 = in_EAX * 0x10;
  local_c = *(int *)(iVar3 + 4 + DAT_01267a34) - *(int *)(iVar3 + DAT_01267a34) >> 4;
  if (0 < local_c) {
    local_8 = 0;
    do {
      piVar1 = *(int **)(local_8 + *(int *)(iVar3 + DAT_01267a34));
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar2 = (int *)piVar1[1];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar2 = (int *)piVar1[2];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar1[2] = 0;
        *piVar1 = 0;
        piVar1[1] = 0;
        piVar1[3] = 0;
        piVar1[4] = 0;
        piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1);
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  piVar1 = (int *)(iVar3 + 4 + DAT_01267a34);
  if (*(int *)(iVar3 + DAT_01267a34) != *piVar1) {
    *piVar1 = *(int *)(iVar3 + DAT_01267a34);
  }
  return;
}

