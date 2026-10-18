// __fread_nolock_s @ 00ab2464 body=[[00ab2464, 00ab261f]]


/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2010 Release */

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *_DstBuf_00;
  uint local_10;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (void *)0x0) {
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_00ab24d7:
        uVar8 = _ElementSize * _Count;
        uVar7 = uVar8;
        puVar2 = _DstBuf;
        uVar1 = _DstSize;
        if ((_File->_flag & 0x10cU) == 0) {
          local_10 = 0x1000;
        }
        else {
          local_10 = _File->_bufsiz;
        }
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if ((_File->_flag & 0x10cU) != 0) break;
LAB_00ab254d:
            if (uVar7 < local_10) {
              iVar5 = __filbuf(_File);
              if (iVar5 == -1) goto LAB_00ab260c;
              if (uVar1 == 0) goto LAB_00ab25e2;
              *puVar2 = (char)iVar5;
              local_10 = _File->_bufsiz;
              uVar7 = uVar7 - 1;
              uVar1 = uVar1 - 1;
              puVar2 = puVar2 + 1;
            }
            else {
              if (local_10 == 0) {
                uVar4 = 0x7fffffff;
                if (uVar7 < 0x80000000) {
                  uVar4 = uVar7;
                }
              }
              else {
                if (uVar7 < 0x80000000) {
                  uVar6 = uVar7 % local_10;
                  uVar4 = uVar7;
                }
                else {
                  uVar6 = (uint)(0x7fffffff % (ulonglong)local_10);
                  uVar4 = 0x7fffffff;
                }
                uVar4 = uVar4 - uVar6;
              }
              if (uVar1 < uVar4) goto LAB_00ab25e2;
              _DstBuf_00 = puVar2;
              iVar5 = __fileno(_File);
              iVar5 = __read(iVar5,_DstBuf_00,uVar4);
              if (iVar5 == 0) {
                _File->_flag = _File->_flag | 0x10;
                goto LAB_00ab260c;
              }
              if (iVar5 == -1) goto LAB_00ab2608;
              uVar7 = uVar7 - iVar5;
              uVar1 = uVar1 - iVar5;
              puVar2 = puVar2 + iVar5;
            }
          }
          uVar4 = _File->_cnt;
          if (uVar4 == 0) goto LAB_00ab254d;
          if ((int)uVar4 < 0) {
LAB_00ab2608:
            _File->_flag = _File->_flag | 0x20;
LAB_00ab260c:
            return (uVar8 - uVar7) / _ElementSize;
          }
          uVar6 = uVar7;
          if (uVar4 <= uVar7) {
            uVar6 = uVar4;
          }
          if (uVar1 < uVar6) {
LAB_00ab25e2:
            if (_DstSize != 0xffffffff) {
              _memset(_DstBuf,0,_DstSize);
            }
            piVar3 = __errno();
            *piVar3 = 0x22;
            goto LAB_00ab2497;
          }
          _memcpy_s(puVar2,uVar1,_File->_ptr,uVar6);
          _File->_cnt = _File->_cnt - uVar6;
          _File->_ptr = _File->_ptr + uVar6;
          uVar7 = uVar7 - uVar6;
          uVar1 = uVar1 - uVar6;
          puVar2 = puVar2 + uVar6;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_00ab24d7;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
LAB_00ab2497:
    FUN_00ab7c17();
  }
  return 0;
}

