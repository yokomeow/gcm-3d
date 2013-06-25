#ifndef GCM_GEO_MESH_LOADER_H_
#define GCM_GEO_MESH_LOADER_H_

#include <map>
#include <string>

#include "MeshLoader.h"
#include "TetrMeshFirstOrder.h"
#include "../Exception.h"
#include "../Utils.h"
#include "../Logging.h"
#include "../util/formats/MshTetrFileReader.h"

#include <gmsh/Gmsh.h>
#include <gmsh/GModel.h>
#include <gmsh/GEntity.h>
#include <gmsh/MElement.h>
#include <gmsh/MVertex.h>
#include <gmsh/MTriangle.h>
#include <gmsh/MTetrahedron.h>

using namespace gcm;
using namespace std;

namespace gcm {
	class GeoMeshLoader: public TemplatedMeshLoader<TetrMeshFirstOrder>
	{
	protected:
		/*
		 * Loads mesh from using passed configuration
		 */
		 void loadMesh(Params params, TetrMeshFirstOrder* mesh, GCMDispatcher* dispatcher);
		 void preLoadMesh(Params params, AABB* scene);
		 void createMshFile(Params params);
		 USE_LOGGER;
		 bool mshFileCreated;
		 string mshFileName;
	public:
		GeoMeshLoader();
		~GeoMeshLoader();
		/*
		 * Returns mesh loader type
		 */
		string getType();
		void cleanUp();
	};
}

#endif /* GCM_GEO_MESH_LOADER_H_ */