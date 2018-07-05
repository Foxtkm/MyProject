/******************************************************************************
* File Name : heap.h                               Ver : 1.00  Date : 97-10-22
*
* Description :
*
*		�q�[�v�������Ǘ� �w�b�_�t�@�C���D
*
* Author : Moriharu Ohzu.
*
******************************************************************************/
#ifndef		_HEAP_H_
#define		_HEAP_H_

#include	<stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============================================================================
*
* Purpose : �q�[�v�������̊m�ہD
*
* Return  : �m�ۂ����q�[�v�������̐擪�A�h���X��Ԃ��D
*
*============================================================================*/
void*
new_object
(
	size_t			size			/* �m�ۂ��郁�����̃o�C�g�� */
);

/*=============================================================================
*
* Purpose : �q�[�v�������̉���D
*
* Return  : �Ȃ��D
*
*============================================================================*/
#define	del_object( p )		free( (p) )

#ifdef __cplusplus
}
#endif

#endif

/********** End of File ******************************************************/