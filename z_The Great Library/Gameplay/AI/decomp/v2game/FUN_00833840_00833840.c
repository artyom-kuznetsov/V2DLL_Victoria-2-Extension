// FUN_00833840 @ 00833840 body=[[00833840, 0083392e]]


void FUN_00833840(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  for (piVar2 = DAT_01318c70; piVar1 = DAT_01318c40, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]
      ) {
    if (*piVar2 == in_ECX) {
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar1 = DAT_01318c40;
      }
      break;
    }
  }
  do {
    piVar2 = DAT_01318c50;
    if (piVar1 == (int *)0x0) break;
    if (*piVar1 == in_ECX) {
      if (piVar1 != (int *)0x0) {
        *piVar1 = 0;
        piVar2 = DAT_01318c50;
      }
      break;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
joined_r0x0083388e:
  piVar1 = DAT_01318c90;
  if (piVar2 == (int *)0x0) goto joined_r0x008338ae;
  if (*piVar2 == in_ECX) {
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar1 = DAT_01318c90;
    }
    goto joined_r0x008338ae;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x0083388e;
joined_r0x008338ae:
  piVar2 = DAT_01318ca0;
  if (piVar1 == (int *)0x0) goto joined_r0x008338ce;
  if (*piVar1 == in_ECX) {
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar2 = DAT_01318ca0;
    }
    goto joined_r0x008338ce;
  }
  piVar1 = (int *)piVar1[2];
  goto joined_r0x008338ae;
joined_r0x008338ce:
  piVar1 = DAT_01318cb0;
  if (piVar2 == (int *)0x0) goto joined_r0x008338ee;
  if (*piVar2 == in_ECX) {
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar1 = DAT_01318cb0;
    }
    goto joined_r0x008338ee;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x008338ce;
joined_r0x008338ee:
  if (piVar1 == (int *)0x0) {
LAB_00833907:
    piVar2 = DAT_01318cc0;
    if (DAT_01318cc0 != (int *)0x0) {
      while (*piVar2 != in_ECX) {
        piVar2 = (int *)piVar2[2];
        if (piVar2 == (int *)0x0) {
          FUN_00825fd0();
          return;
        }
      }
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
      }
    }
    FUN_00825fd0();
    return;
  }
  if (*piVar1 == in_ECX) {
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
    }
    goto LAB_00833907;
  }
  piVar1 = (int *)piVar1[2];
  goto joined_r0x008338ee;
}

