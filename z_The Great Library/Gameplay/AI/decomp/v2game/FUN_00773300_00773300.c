// FUN_00773300 @ 00773300 body=[[00773300, 0077334d] [00773357, 0077337b] [00773385, 0077339a]]


void FUN_00773300(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_00409350(&DAT_00ded94d,0);
  for (puVar1 = *(undefined4 **)(in_ECX + 0x314); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x38))();
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  if (*(int *)(in_ECX + 0x314) == 0) {
    *(undefined4 *)(in_ECX + 0x314) = 0;
    *(undefined4 *)(in_ECX + 0x318) = 0;
    *(undefined4 *)(in_ECX + 0x31c) = 0;
    if (*(int *)(in_ECX + 0x324) == 0) {
      *(undefined4 *)(in_ECX + 0x324) = 0;
      *(undefined4 *)(in_ECX + 0x328) = 0;
      *(undefined4 *)(in_ECX + 0x32c) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x324));
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 0x314));
}

