// FUN_009d7050 @ 009d7050 body=[[009d7050, 009d712f]]


void FUN_009d7050(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  char local_c [4];
  uint local_8;
  
  _sprintf(local_c,"%d");
  local_8 = 0;
  do {
    pcVar2 = (char *)in_ECX[1];
    pcVar1 = local_c + local_8;
    if ((pcVar1 < pcVar2) && (pcVar3 = (char *)*in_ECX, pcVar3 <= pcVar1)) {
      if (pcVar2 == (char *)in_ECX[2]) {
        if ((int)pcVar2 - (int)pcVar3 == -1) {
LAB_009d7126:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar4 = ((int)pcVar2 - (int)pcVar3) + 1;
        uVar6 = in_ECX[2] - (int)pcVar3;
        if (uVar6 < uVar4) {
          if (-(uVar6 >> 1) - 1 < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_009d7290(uVar6);
        }
      }
      if ((char *)in_ECX[1] != (char *)0x0) {
        *(char *)in_ECX[1] = pcVar1[*in_ECX - (int)pcVar3];
      }
    }
    else {
      if (pcVar2 == (char *)in_ECX[2]) {
        iVar5 = (int)pcVar2 - *in_ECX;
        if (iVar5 == -1) goto LAB_009d7126;
        uVar4 = iVar5 + 1;
        uVar6 = in_ECX[2] - *in_ECX;
        if (uVar6 < uVar4) {
          if (-(uVar6 >> 1) - 1 < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar4) {
            uVar6 = uVar4;
          }
          FUN_009d7290(uVar6);
        }
      }
      if ((char *)in_ECX[1] != (char *)0x0) {
        *(char *)in_ECX[1] = *pcVar1;
      }
    }
    in_ECX[1] = in_ECX[1] + 1;
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return;
    }
  } while( true );
}

