// FUN_00827d50 @ 00827d50 body=[[00827d50, 00827d90]]


void FUN_00827d50(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xe8))();
  puVar1 = DAT_01318b20;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_00827d7d:
      FUN_00825fd0();
                    /* WARNING: Could not recover jumptable at 0x00827d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_ECX + 0xc4))();
      return;
    }
    if ((int *)*puVar1 == in_ECX) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      goto LAB_00827d7d;
    }
    puVar1 = (undefined4 *)puVar1[2];
  } while( true );
}

