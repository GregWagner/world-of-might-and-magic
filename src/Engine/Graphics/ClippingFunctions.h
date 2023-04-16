#pragma once
#include "Engine/Graphics/IRender.h"

struct VertexBuffer {
    std::array<RenderVertexSoft, 64> pVertices = {{}};
    int uNumVertices;
};

// TODO(captainurist): this is just Vec3f
struct stru312 {
    float x = 0;
    float y = 0;
    float z = 0;
};

/*  126 */
#pragma pack(push, 1)
struct stru9 {
    //----- (00498093) --------------------------------------------------------
    inline stru9() {}

    bool ClipVertsToFace(struct RenderVertexSoft *a1, unsigned int uNumVertices,
                 float a3, float a4, float a5,
                 struct RenderVertexSoft *pOutVertices,
                 signed int *pOutNumVertices);
    bool ClipVertsToPortal(struct RenderVertexSoft *pPortalBounding,
                 unsigned int uNumVertices,
                 struct IndoorCameraD3D_Vec4 *pVertices,
                 struct RenderVertexSoft *pVertices2,
                 unsigned int *pOutNumVertices);
    bool ClipVertsToFrustumPlane(RenderVertexSoft *pInVertices, signed int pInNumVertices,
                                 RenderVertexSoft *pOutVertices,
                                 unsigned int *pOutNumVertices,
                                 Vec3f *CamFrustumNormal, float CamDotDistance, char *VertsAdjusted,
                                 int unused);
    void AddVertex(struct VertexBuffer *pVertexBuffer,
                   struct RenderVertexSoft *pVertex);
    bool AdjustVertToClipEdge(struct RenderVertexSoft *a1, struct RenderVertexSoft *a2,
                 struct RenderVertexSoft *a3, struct stru312 *a4,
                 struct RenderVertexSoft *a5);
    bool AreVectorsCollinear(struct RenderVertexSoft *a1,
                             struct RenderVertexSoft *a2, struct stru312 *a3);
    bool DoDecalVertsNeedClipping(struct RenderVertexSoft *a1, struct RenderVertexSoft *a2,
                 struct RenderVertexSoft *a3, struct stru312 *a4);
};
#pragma pack(pop)
