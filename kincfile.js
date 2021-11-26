let project = new Project('ezc');

project.addIncludeDir('cr');

project.addFile('cr/cr.h');

project.addFile('Sources/**');
project.setDebugDir('Deployment');
resolve(project);
